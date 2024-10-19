package screens;

import openfl.display.Sprite;

abstract class AbstractScreen extends Sprite {
	public function new() {
		super();
	}

	public function setTitle(?title:String, id:Int):Void {

	}

	public function disable(?fadeOut:Float){

	}
	public function enable(?fadeIn:Float){

	}
}
