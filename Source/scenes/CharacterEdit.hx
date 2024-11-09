package scenes;

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

@:keep class CharacterEdit extends AbstractScene
{
    public function new()
    {
        trace("Character Edit Init");
        super();
        
}
    
    public override function dispose():Void
    {
        super.dispose();
    }
}