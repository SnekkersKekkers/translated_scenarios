switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,3);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("L040100002_01_000");
    MsgDisp("Kazama","Hey, is this fine?
This is expensive, isn't it?");
    MsgDisp("主人公","I'm always in your care.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100002_01_010");
    MsgDisp("Kazama","I guess so.
You do sometimes trouble me.");
    MsgDisp("主人公","Geez.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100002_01_020");
    MsgDisp("Kazama","Well, I'll take it as a good luck charm.
Thank you very much.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Thank goodness.
He seemed happy.)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(1,3);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("L040100002_01_030");
    MsgDisp("Kazama","Wow, this is expensive, isn't it?");
    MsgDisp("主人公","Yeah, I went all out, you know?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100002_01_040");
    MsgDisp("Kazama","How much does your job pay you?
Thinking about that, it's a little hard to
eat this.");
    MsgDisp("主人公","Huh?
It looks delicious, so eat it properly.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100002_01_050");
    MsgDisp("Kazama","I guess so.
I eat it thankfully.");
    MsgDisp("主人公","(Yeah.
He seemed happy.)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100002_01_060");
    MsgDisp("Kazama","Did you push yourself for this?");
    MsgDisp("主人公","Huh?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100002_01_070");
    MsgDisp("Kazama","... Geez, it's fine.
As long as your feelings are in this.");
    ChMotion(1,0);
    MsgDisp("主人公","Well, the chocolate looked super
delicious, too.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("L040100002_01_080");
    MsgDisp("Kazama","Of course it's delicious.
You were the one who gave it to me.");
    MsgDisp("主人公","Hm...?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100002_01_090");
    MsgDisp("Kazama","Alright, let's eat it together later.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(｛風真＊＊｝ was happy about it, right?");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
