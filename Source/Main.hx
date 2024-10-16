package;

import debug.FPSMEM.FPS_Mem;

import openfl.display.FPS;
import openfl.display.Sprite;

import spine.Main;

import characters.Vampire;

class Main extends Sprite {
	public function new() {
		super();
		//		var vampire = new Vampire();
		var fps:FPS = new FPS(10, 100, 0xffffff);
		//
		addChild(fps);
		var fps_mem:FPS_Mem = new FPS_Mem(10, 10, 0xffffff);
		//
		addChild(fps_mem);
		//		addChild(second_main);
	}
}
