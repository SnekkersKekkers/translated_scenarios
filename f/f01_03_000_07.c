MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoiceEVSPlay(3);
    VoicePlay("F010300007_03_000");
    MsgDisp("Honda","｛主人公｝.
Are you going home now?");
    MsgDisp("主人公","Yes.
You too, ｛本多＊＊｝?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("F010300007_03_010");
    MsgDisp("Honda","Ding, ding.
So, how about we go together?");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("F010300007_03_020");
    MsgDisp("Honda","Oh, there you are!");
    MsgDisp("主人公","Oh, ｛本多＊＊｝.
What's up?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("F010300007_03_030");
    MsgDisp("Honda","I really wanted to talk to you, so I was
looking for you.
... So, how about we walk home together?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I'm busy.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("F010300007_03_040");
        MsgDisp("Honda","Okay～
Let's go!");
        break ;
        case 4:
        case 5:
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("F010300007_03_050");
        MsgDisp("Honda","Of course!
So, right to it—");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("F010300007_03_060");
        MsgDisp("Honda","Sorry, I got too excited.
Okay, onward we walk!");
        MsgDisp("主人公","Hehe, okay.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    BGMStop();
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1,1);
        VoicePlay("F010300007_03_070");
        MsgDisp("Honda","Sounds good!
Right when I was getting hungry.
Let's go, let's go!");
        break ;
        case 4:
        case 5:
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,1,1);
        VoicePlay("F010300007_03_080");
        MsgDisp("Honda","Actually, I was going to say that too.");
        MsgDisp("主人公","Really?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("F010300007_03_090");
        MsgDisp("Honda","Because you can't really talk while
walking, right?
Well, let's go!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    BGMStop();
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("F010300007_03_100");
        MsgDisp("Honda","Sorry, I guess it was sudden.
Well, another time!");
        break ;
        case 4:
        case 5:
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4,1);
        VoicePlay("F010300007_03_110");
        MsgDisp("Honda","Is that so?
Well then, I'll just finish my errands～");
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("F010300007_03_120");
        MsgDisp("Honda","So, don't worry!
Be careful, later!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(I feel like I did a bad thing...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
