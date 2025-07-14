ChLayout(1);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do about my partner for the
three-legged race......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(7,37,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("O030701000_07_000");
    MsgDisp("Mikage","｛主人公｝, what's wrong?
Are you alone?");
    MsgDisp("主人公","Yes.
I haven't found a partner yet......");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,3);
    VoicePlay("O030701000_07_010");
    MsgDisp("Mikage","I see, that's a problem......");
    MsgDisp("主人公","......What about you, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030701000_07_020");
    MsgDisp("Mikage","Seriously? If you're okay with it, should
we team up?");
    MsgDisp("主人公","Yes, thank you!");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do about my partner for the
three-legged race......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(7,37,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("O030701000_07_030");
    MsgDisp("Mikage","｛主人公｝, have you found a partner
yet?");
    MsgDisp("主人公","No, not yet.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030701000_07_040");
    MsgDisp("Mikage","Guess you can just lie back.");
    MsgDisp("主人公","It's no laughing matter......");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O030701000_07_050");
    MsgDisp("Mikage","Sorry, sorry, you're right.");
    MsgDisp("主人公","Are you participating, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O030701000_07_060");
    MsgDisp("Mikage","Me?
Sure, if you're okay with it.");
    MsgDisp("主人公","I am.
Then, please pair up with me.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O030701000_07_070");
    MsgDisp("Mikage","Alright, now that that's decided, let's go
for first!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do about my partner for the
three-legged race......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(7,37,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("O030701000_07_080");
    MsgDisp("Mikage","｛主人公｝, have you found a partner
yet?");
    MsgDisp("主人公","No, not yet.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O030701000_07_090");
    MsgDisp("Mikage","I'm free, you know?");
    MsgDisp("主人公","Hm......?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030701000_07_100");
    MsgDisp("Mikage","How cold.");
    MsgDisp("主人公","Ah...... Then, would you like to pair up
with me?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O030701000_07_110");
    MsgDisp("Mikage","We're all ready.
Let's win!");
    MsgDisp("主人公","Yes!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
