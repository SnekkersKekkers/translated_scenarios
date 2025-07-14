switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q040200001_02_000");
    MsgDisp("Sassa","Sounds great.
Let's go!");
    MsgDisp("主人公","I'm glad.
Off we go then!");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q040200001_02_010");
    MsgDisp("Sassa","Sure.");
    MsgDisp("主人公","Awesome! I'm glad you agreed.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("Q040200001_02_020");
    MsgDisp("Sassa","Come on,
There's no way I won't go.");
    MsgDisp("主人公","Hehe, thanks.");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q040200001_02_030");
    MsgDisp("Sassa","I was also thinking that.
Let's go!");
    MsgDisp("主人公","Awesome! I'm so glad you agreed. Doesn't
sightseeing in Nagasaki sound so exciting?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q040200001_02_040");
    MsgDisp("Sassa","Yeah, this is my first time after all.
And I'm even with you, so I'm sure it'll
be a blast.");
    MsgDisp("主人公","Hehe!
Well then, let's go!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("Q040200001_02_050");
    MsgDisp("Sassa","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
