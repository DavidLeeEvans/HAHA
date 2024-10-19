package screens;

import openfl.display.Sprite;

abstract class AbstractScreen extends Sprite {
	private var title:String;
	private var id:Int;
	private var duration:Float;
	public function new(id:Int,?_title:String){
		if(_title != null){
			setTitle(_title);
		}else{
			setTitle("");
		}
		super();
	}

	
	public function setTitle(?_title:String):Void {
	title = _title;

	}

	public function disable(?fadeOut:Float){

	}
	public function enable(?fadeIn:Float){

	}
}
