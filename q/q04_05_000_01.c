switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("Q040500001_05_000");
    MsgDisp("Hiiragi","With me?
Sure, I wouldn't mind.");
    MsgDisp("主人公","I'm glad.
Well then, let's go!");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("Q040500001_05_010");
    MsgDisp("Hiiragi","I sure would like to.
I even wanted to ask you.");
    MsgDisp("主人公","Yeah!
Well then, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4,1);
    VoicePlay("Q040500001_05_020");
    MsgDisp("Hiiragi","Of course.
I was already planning to do so.");
    MsgDisp("主人公","Yeah!
Well then, where shall we start?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q040500001_05_030");
    MsgDisp("Hiiragi","That is a good point.
How about we say our preferred places one
after another?");
    MsgDisp("主人公","Hehe, nice idea!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
