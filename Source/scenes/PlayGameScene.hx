package scenes;

import starling.events.TouchEvent;
import starling.events.EnterFrameEvent;
import starling.display.Sprite;
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

@:keep class PlayGameScene extends Sprite {

	private var _frameCount:Int;
    private var _failCount:Int;
    private var _started:Bool;
    private var _frameTimes:Array<Float>;
    private var _targetFps:Int;
    private var _phase:Int;

	public function new() {
		super();
		load_track(3); // TODO testing
		load_characters();
		load_good_opposition();
		load_bad_opposition();
		addEventListener(Event.ENTER_FRAME, onEnterFrame);
		addEventListener(TouchEvent.TOUCH, onTouch);
	}

	public override function dispose():Void {
		super.dispose();
		// dle TODO  removeEventListener(Event.ENTER_FRAME);
		unload_assets();
	}

    private function load_characters():Void {}
    private function load_track(level:Int):Void {}
    private function load_good_opposition():Void {}
    private function load_bad_opposition():Void {}
	private function unload_assets():Void {}
	

	private function onEnterFrame(event:EnterFrameEvent, passedTime:Float):Void
		{
			if (!_started) return;
		}
	
		private function onTouch(event:TouchEvent):Void
			{
				if (!_started) return;
			}
		
}



