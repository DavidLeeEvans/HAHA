package scenes;

import js.lib.webassembly.Global;
import starling.animation.BezierEasing;
import starling.animation.Transitions;
import starling.animation.Tween;
import starling.core.Starling;
import starling.display.Image;
import starling.events.Event;
import starling.text.TextField;
import starling.utils.Color;
import starling.utils.MathUtil.deg2rad;
import openfl.Vector;

import utils.MenuButton;

@:keep class SplashScene extends Scene
{
    private var _egg:Image;
    private var _transitions:Array<String>;
    
    public function new()
    {
        super();
        
        // some standard Starling transitions:
        
        _transitions = [Transitions.LINEAR, Transitions.EASE_IN_OUT,
                        Transitions.EASE_OUT_BACK, Transitions.EASE_OUT_BOUNCE,
                        Transitions.EASE_OUT_ELASTIC];
        
        // you can easily add the easing functions recommended for Material Design like this:
        // see: https://material.io/design/motion/speed.html#easing
        // see: http://cubic-bezier.com

        Transitions.register("materialStandard",   BezierEasing.create(0.4, 0.0, 0.2, 1.0));
        Transitions.register("materialDecelerate", BezierEasing.create(0.0, 0.0, 0.2, 1.0));
        Transitions.register("materialAccelerate", BezierEasing.create(0.4, 0.0, 1.0, 1.0));

        _transitions.push("materialStandard");
        _transitions.push("materialDecelerate");
        _transitions.push("materialAccelerate");

        // the Starling will be tweened
        _egg = new Image(Game.assets.getTexture("starling_front"));
        addChild(_egg);
        onStartButtonTriggered();
    }
    
    private function resetEgg():Void
    {
        // _egg.x = 20;
        // _egg.y = 100;
        // _egg.scaleX = _egg.scaleY = 1.0;
        // _egg.rotation = 0.0;
        _egg.x = Constants.CenterX;
        _egg.y = Constants.CenterY;
        _egg.scaleX = _egg.scaleY = 1.0;
        _egg.rotation = 0.0;

    }
    
    private function onStartButtonTriggered():Void
    {
        resetEgg();
        
        // get next transition style from array and enqueue it at the end
        var transition:String = _transitions.shift();
        _transitions.push(transition);
        
        // to animate any numeric property of an arbitrary object (not just display objects!), 
        // you can create a 'Tween'. One tween object animates one target for a certain time, 
        // a with certain transition function.
        var tween:Tween = new Tween(_egg, 2.0, transition);
        
        // you can animate any property as long as it's numeric (int, uint, Number). 
        // it is animated from it's current value to a target value.  
        tween.animate("rotation", deg2rad(360)); // conventional 'animate' call
        tween.moveTo(Constants.CenterX, Constants.GameWidth);                 // convenience method for animating 'x' and 'y'
        tween.scaleTo(1.0);                     // convenience method for 'scaleX' and 'scaleY'
        tween.onComplete = function():Void { /**/ };
        
        // the tween alone is useless -- for an animation to be carried out, it has to be 
        // advance once in every frame.            
        // This is done by the 'Juggler'. It receives the tween and will carry it out.
        // We use the default juggler here, but you can create your own jugglers, as well.            
        // That way, you can group animations into logical parts.  
        // Starling.current.juggler.add(tween);
        // Starling.current.juggler.add(tween);
        Starling.current.juggler.delayCall(Starling.current.juggler.add(tween),2.0);
    }

    
    private function onDelayButtonTriggered():Void
    {
        // Using the juggler, you can delay a method call. This is especially useful when
        // you use your own juggler in a component of your game, because it gives you perfect 
        // control over the flow of time and animations. 
        
        Starling.current.juggler.delayCall(colorizeEgg, 1.0, [true]);
        Starling.current.juggler.delayCall(colorizeEgg, 2.0, [false]);
        Starling.current.juggler.delayCall(function(?unused):Void { /**/ }, 2.0);
    }
    
    private function colorizeEgg(colorize:Bool):Void
    {
        _egg.color = colorize ? 0xEA8220 : Color.WHITE;
    }
    
    public override function dispose():Void
    {
        super.dispose();
    }
}