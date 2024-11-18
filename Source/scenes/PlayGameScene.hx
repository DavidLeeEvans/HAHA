package scenes;

import characters.AbstractBaseCharacter;
import spine.starling.SkeletonAnimation;
import characters.Vampire;
import characters.Angel;
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

import openfl.utils.Assets;
import spine.attachments.AtlasAttachmentLoader;
import spine.attachments.AttachmentLoader;
import spine.SkeletonJson;
import spine.starling.SkeletonAnimation;
import spine.starling.StarlingAssetsFile;
import spine.starling.StarlingAtlasAttachmentLoader;
import spine.starling.StarlingTextureLoader;
import starling.core.Starling;
import starling.display.Sprite;
import starling.textures.Texture;


@:keep class PlayGameScene extends Sprite {
	private var _frameCount:Int;
	private var _failCount:Int;
	private var _started:Bool;
	private var _frameTimes:Array<Float>;
	private var _targetFps:Int;
	private var _phase:Int;
	//
	private  var _angel:Angel;
	private var _vampire:Vampire;

	public function new() {
		super();
		//
		addEventListener(Event.ENTER_FRAME, onEnterFrame);
		addEventListener(TouchEvent.TOUCH, onTouch);
		load_good_opposition();
		// load_bad_opposition();
		// var skeletonFile = new StarlingAssetsFile("goblin/goblins-pro.json");
        // var loaders = [ createFromStarlingAtlas(), createFromSpineAtlas() ];

        // for (index in 0...loaders.length) {
        //     var skeletonJson = new SkeletonJson(loaders[index]);
        //     var skeletonData = skeletonJson.readSkeletonData(skeletonFile);
        //     // _angel = new SkeletonAnimation(skeletonData);
        //     _angel = new Angel(skeletonData);


        //     _angel.y = 100 + (Starling.current.stage.stageHeight - 200) * Math.random();
        //     _angel.x = 100 + (Starling.current.stage.stageWidth - 200) * Math.random();
        //     _angel.skeleton.setSkinByName("goblin");
        //     _angel.skeleton.setSlotsToSetupPose();
        //     _angel.state.setAnimationByName(0, "walk", true);
		// 	_angel.scale = .2;

        //     Starling.current.juggler.add(_angel);
        //     addChild(_angel);
        // }
    }

    private function createFromStarlingAtlas(gt:String ,bmd:String):AttachmentLoader {
        var textureAtlas = new spine.support.graphics.TextureAtlas(
            Assets.getText(gt),
            new StarlingTextureLoader(
                // Texture.fromBitmapData(Assets.getBitmapData("goblin/goblins.png"))
                Texture.fromBitmapData(Assets.getBitmapData(bmd))
            )
        );

        return new AtlasAttachmentLoader(textureAtlas);
    }

    private function createFromSpineAtlas(gt:String, bmd:String):AttachmentLoader {
        var textureAtlas = new starling.textures.TextureAtlas(
            Texture.fromBitmapData(Assets.getBitmapData(bmd)),
            Assets.getText(gt)
        );

        return new StarlingAtlasAttachmentLoader(textureAtlas);
    }
		//
		// load_track(3); // TODO testing
		// load_characters();
		// load_good_opposition();
		// load_bad_opposition();
	

	public override function dispose():Void {
		super.dispose();
		// dle TODO  removeEventListener(Event.ENTER_FRAME);
		unload_assets();
	}

	// private function load_characters():Void {
	// 	_angel = new Angel();
	// 	 Starling.current.juggler.add(_angel);
    //         // addChild(skeleton);

	// }

	private function load_track(level:Int):Void {}

	private function load_good_opposition():Void {
		var skeletonFile = new StarlingAssetsFile("goblin/goblins-pro.json");
        var loaders = [ createFromStarlingAtlas("goblin/goblins.atlas","goblin/goblins.png"), createFromSpineAtlas("goblin/goblins-mesh-starling.xml","goblin/goblins-mesh-starling.png") ];

        for (index in 0...loaders.length) {
            var skeletonJson = new SkeletonJson(loaders[index]);
            var skeletonData = skeletonJson.readSkeletonData(skeletonFile);
            // _angel = new SkeletonAnimation(skeletonData);
            _angel = new Angel(skeletonData);


            _angel.y = 100 + (Starling.current.stage.stageHeight - 200) * Math.random();
            _angel.x = 100 + (Starling.current.stage.stageWidth - 200) * Math.random();
            _angel.skeleton.setSkinByName("goblin");
            _angel.skeleton.setSlotsToSetupPose();
            _angel.state.setAnimationByName(0, "walk", true);
			_angel.scale = .2;

            Starling.current.juggler.add(_angel);
            addChild(_angel);
			// Load Vampire
			var skeletonFile = new StarlingAssetsFile("goblin/goblins-pro.json");
        var loaders = [ createFromStarlingAtlas("goblin/goblins.atlas","goblin/goblins.png"), createFromSpineAtlas("goblin/goblins-mesh-starling.xml","goblin/goblins-mesh-starling.png") ];

        for (index in 0...loaders.length) {
            var skeletonJson = new SkeletonJson(loaders[index]);
            var skeletonData = skeletonJson.readSkeletonData(skeletonFile);
            // _angel = new SkeletonAnimation(skeletonData);
            _angel = new Angel(skeletonData);


            _angel.y = 100 + (Starling.current.stage.stageHeight - 200) * Math.random();
            _angel.x = 100 + (Starling.current.stage.stageWidth - 200) * Math.random();
            _angel.skeleton.setSkinByName("goblin");
            _angel.skeleton.setSlotsToSetupPose();
            _angel.state.setAnimationByName(0, "walk", true);
			_angel.scale = .2;

            Starling.current.juggler.add(_angel);
            addChild(_angel);
        }
	}

	private function load_bad_opposition():Void {

		var skeletonFile = new StarlingAssetsFile("goblin/goblins-pro.json");
        var loaders = [ createFromStarlingAtlas("goblin/goblins.atlas","goblin/goblins.png"), createFromSpineAtlas("goblin/goblins-mesh-starling.xml","goblin/goblins-mesh-starling.png") ];

        for (index in 0...loaders.length) {
            var skeletonJson = new SkeletonJson(loaders[index]);
            var skeletonData = skeletonJson.readSkeletonData(skeletonFile);
            // _angel = new SkeletonAnimation(skeletonData);
            _angel = new Angel(skeletonData);


            _angel.y = 100 + (Starling.current.stage.stageHeight - 200) * Math.random();
            _angel.x = 100 + (Starling.current.stage.stageWidth - 200) * Math.random();
            _angel.skeleton.setSkinByName("goblin");
            _angel.skeleton.setSlotsToSetupPose();
            _angel.state.setAnimationByName(0, "walk", true);
			_angel.scale = .2;

            Starling.current.juggler.add(_angel);
            addChild(_angel);
        }
	}

	private function unload_assets():Void {}

	private function onEnterFrame(event:EnterFrameEvent, passedTime:Float):Void {
		if (!_started)
			return;
	}

	private function onTouch(event:TouchEvent):Void {
		if (!_started)
			return;
	}
}
