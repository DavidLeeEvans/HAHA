package gasm.examples.openfl.bunnymark;

import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import gasm.core.Entity;
import gasm.extra.components.BounceAroundComponent;
import gasm.openfl.components.OFLSpriteComponent;
import gasm.openfl.OFLContext;

/**
 * ...
 * @author Leo Bergman
 */
class Bunny extends OFLContext 
{
	public function new() 
	{
		super();
		//testMouseFollowerSoundClick();
		testBunnies(1000);
		// var font = Assets.getFont("assets/fonts/ARIAL.TTF");
		// var tc = new OFLTextComponent(font);
		// tc.outline();
		// var ent = new Entity()
					// .add(tc).add(new TextModelComponent("0", 25, 0xFFAA00))
					// .add(new FPSComponent())
					// .add(new FPSDisplayComponent());
					
		// var snd = Assets.getSound("assets/sound/snd.mp3");
		// baseEntity.add(new OFLSoundComponent(snd)).add(new PressSoundComponent());
		// baseEntity.addChild(ent);
	}
	
	function testBunnies(count:Int) 
	{
		var bmd = Assets.getBitmapData("assets/img/wabbit_alpha.png");
		for (i in 0...count)
		{
			var sp = new Sprite();
			sp.addChild(new Bitmap(bmd));
			var ent = new Entity().add(new OFLSpriteComponent(sp)).add(new BounceAroundComponent());
			baseEntity.addChild(ent);
		}
		
	}
}
