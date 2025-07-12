ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R040500001_05_000");
    MsgDisp("Hiiragi","You look appropriate for the occasion.
That's very important.");
    MsgDisp("主人公","You praised me, right?
Thank you.");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R040500001_05_010");
    MsgDisp("Hiiragi","That's a very nice outfit,
it suits you.");
    MsgDisp("主人公","Really? I'm so glad!");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("R040500001_05_020");
    MsgDisp("Hiiragi","I should warn you though, 
you have too much on your plate.
It might ruin your dress.");
    MsgDisp("主人公","Yeah...");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R040500001_05_030");
    MsgDisp("Hiiragi","Don't make that face.
I'll go get some food for you.
You can just stay here, young lady.");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R040500001_05_040");
    MsgDisp("Hiiragi",".........I see.");
    MsgDisp("主人公","Hm?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("R040500001_05_050");
    MsgDisp("Hiiragi","I think I figured it out.
The reason I couldn't find you is
because of you and that dress.");
    ChEye(5,4);
    VoicePlay("R040500001_05_060");
    MsgDisp("Hiiragi","I can see why the other boys
would want to be in your way.");
    MsgDisp("主人公","Umm...");
    ChMotion(5,3);
    VoicePlay("R040500001_05_070");
    MsgDisp("Hiiragi","May I pretend to be an escort
to kidnap you?");
    MsgDisp("主人公","Huuh?");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("R040500001_05_080");
    MsgDisp("Hiiragi","Haha.
I'm only half-joking.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
