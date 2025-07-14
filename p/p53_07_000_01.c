BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(I feel calmer than last year.
But...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530700001_07_000");
    MsgDisp("Mikage","You seem more composed, huh? ");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. More or less, since
it's my second time...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700001_07_010");
    MsgDisp("Mikage","Is that so.
But, I'm sure there are juniors who look
pitiful when going up on stage, right?");
    MsgDisp("主人公","Ah...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("P530700001_07_020");
    MsgDisp("Mikage","Make use of your experience, and cover for
them, okay?");
    MsgDisp("主人公","Yes!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700001_07_030");
    MsgDisp("Mikage","Alright, I leave it to you then Senpai.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P530700001_07_040");
    MsgDisp("Mikage","Then, go.");
    MsgDisp("主人公","(Huh... Talking to ｛御影＊＊｝ relaxed
me a bit!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(I feel calmer than last year.
But...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P530700001_07_050");
    MsgDisp("Mikage","｛主人公｝, You seem a bit more
composed, huh?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. I'm not composed!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700001_07_060");
    MsgDisp("Mikage","I see, my bad.
But if you keep it lively like always, the
chances of success will increase.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P530700001_07_070");
    MsgDisp("Mikage","You have a mysterious power to make those
around you feel at ease");
    MsgDisp("主人公","Eh, don't you have that power?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P530700001_07_080");
    MsgDisp("Mikage","No, you do.
Believe in your homeroom teacher.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("P530700001_07_090");
    MsgDisp("Mikage","When you have fun, everyone else has fun
too.
That's why you'll be sure to succeed.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P530700001_07_100");
    MsgDisp("Mikage","Hey, your friends are waiting.
Go.");
    MsgDisp("主人公","(｛御影＊＊｝ encouraged me.
Alright, I'm going to do my best with
everyone.)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(7,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
