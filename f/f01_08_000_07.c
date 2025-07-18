ChLayout(1);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,254,3,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(8);
    VoicePlay("F010800007_08_000");
    MsgDisp("Shirahane","｛主人公｝, found ya.");
    MsgDisp("主人公","Why are you here?");
    ChMotion(8,0,1);
    VoicePlay("F010800007_08_010");
    MsgDisp("Shirahane","I thought it'd be nice to see ya.
So I tried waiting here.");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("F010800007_08_020");
    MsgDisp("Shirahane","Heck yeah...");
    MsgDisp("主人公","Were you waiting for me, by chance?");
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,2,1);
    ChCheek(8,5);
    VoicePlay("F010800007_08_030");
    MsgDisp("Shirahane","Yep.
I'll walk home with ya.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, I have something to do...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoicePlay("F010800007_08_040");
        MsgDisp("Shirahane","Mm, got it.
Haha!");
        break ;
        case 4:
        case 5:
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,0,1);
        ChEyeOpenLevel(8,0);
        VoicePlay("F010800007_08_050");
        MsgDisp("Shirahane","Alright, let's go.");
        MsgDisp("主人公","Hehe.");
        ChEye(8,3);
        ChMouth(8,0);
        ChMotion(8,2,1);
        VoicePlay("F010800007_08_060");
        MsgDisp("Shirahane","Y'know, this...it feels a little
luxurious, right?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(8,3);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("F010800007_08_070");
        MsgDisp("Shirahane","A cafe, heck yeah!
Let's go!");
        break ;
        case 4:
        case 5:
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoicePlay("F010800007_08_080");
        MsgDisp("Shirahane","Of course ya are.
Man, I just really wanted to talk to ya.
Well, later.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("F010800007_08_090");
        MsgDisp("Shirahane","Then, I guess I gotta go...");
        ChEye(8,3);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("F010800007_08_100");
        MsgDisp("Shirahane","...That was a joke.
Well, another time.");
        MsgClose();
        BGMStop();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(8,0,30);
        Wait(30);
        MsgDisp("主人公","(Right...
He went to the trouble of inviting me, but
it just wasn't right...)");
        break ;
        case 4:
        case 5:
        ChEye(8,0);
        ChMouth(8,2);
        VoicePlay("F010800007_08_110");
        MsgDisp("Shirahane","Really?");
        MsgDisp("主人公","Yeah, sorry.");
        ChEye(8,2);
        ChMouth(8,2);
        ChMotion(8,4,1);
        ChMouthOpenLevel(8,0);
        VoicePlay("F010800007_08_120");
        MsgDisp("Shirahane","...");
        ChEye(8,3);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("F010800007_08_130");
        MsgDisp("Shirahane","Okay.
In that case, be careful on yer way home.");
        MsgClose();
        BGMStop();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(8,0,30);
        MsgDisp("主人公","(He went to the trouble of waiting for me,
so I feel like I did something wrong..)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
ChCheek(8,0);
