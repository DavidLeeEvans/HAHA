package scenes;

import starling.display.DisplayObjectContainer;

abstract class AbstractScene extends DisplayObjectContainer {
	public function new() {
		super();
		// the main menu listens for TRIGGERED events, so we just need to add the button.
		// (the event will bubble up when it's dispatched.)
        disable_scene();
	}

	public function disable_scene():Void {
		visible = false;
		touchable = false;
	}

	public function enable_scene():Void {
		visible = true;
		touchable = true;
	}
}
