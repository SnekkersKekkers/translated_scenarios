BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_658");
    Wait(90,0);
    MsgDisp("主人公","Welcome.");
    MsgClose();
    SEStop("EV_SE_658",3);
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,-1,-1,0,0);
    VoicePlay("I650500000_05_000");
    MsgDisp("Hiiragi","So it really was you.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Are you going on a trip?");
    VoicePlay("I650500000_05_010");
    MsgDisp("Hiiragi","Yes, I am visiting a patron
who is situated quite far away.");
    MsgDisp("主人公","Seems tough......");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("I650500000_05_020");
    MsgDisp("Hiiragi","For you as well. 
You've been working hard up until now.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("I650500000_05_030");
    MsgDisp("Hiiragi","Well then,
I'll see you again at school.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(It must be hard on ｛柊＊＊＊｝, having to
travel far even at this hour......)");
    break ;
    case 3:
    SEPlay("EV_SE_658");
    Wait(90,0);
    MsgDisp("主人公","Welcome.");
    MsgClose();
    SEStop("EV_SE_658",3);
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I650500000_05_040");
    MsgDisp("Hiiragi","｛主人公｝.
So you're working again today.
Good work.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝,
are you still working as well?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,1);
    ChEyeOpenLevel(5,0);
    VoicePlay("I650500000_05_050");
    MsgDisp("Hiiragi","Yes, if it was practice or rehearsals it
would not be a problem at all, but......");
    VoicePlay("I650500000_43_000");
    MsgDisp("Theater Member","Chairman, if we don't hurry,
we'll be late.");
    ChEye(5,0);
    ChMotion(5,4,1);
    ChEyeOpenLevel(5,-1);
    VoicePlay("I650500000_05_060");
    MsgDisp("Hiiragi","Yes, understood.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("I650500000_05_070");
    MsgDisp("Hiiragi","I'm glad to have met with you here.
Haa...... let us both work hard.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ seems tired......
I hope I was able to distract him from
his worries for a bit.)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much.");
    MsgClose();
    SEStop("EV_SE_589",3);
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,255,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I650500000_05_080");
    MsgDisp("Hiiragi","｛主人公｝,
you're working hard again today.");
    MsgDisp("主人公","Oh, ｛柊＊＊＊｝,
did you walk here?");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("I650500000_05_090");
    MsgDisp("Hiiragi","Yes, I was in the area.
When I came to see if you were here,
your cheerful voice resounded.");
    MsgDisp("主人公","I see, thank you.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("I650500000_05_100");
    MsgDisp("Hiiragi","Thank you as well.");
    MsgDisp("主人公","Hm......?");
    ChEye(5,0);
    VoicePlay("I650500000_05_110");
    MsgDisp("Hiiragi","I was able to reflect
upon seeing you.");
    ChEye(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("I650500000_05_120");
    MsgDisp("Hiiragi","You work with a smile on your face.
Compared to that, I......");
    ChEye(5,4);
    ChMotion(5,0);
    ChEyeOpenLevel(5,-1);
    VoicePlay("I650500000_05_130");
    MsgDisp("Hiiragi","From now, when I begin to feel
the urge to sigh at during work,
I will remember your smiling face.");
    VoicePlay("I650500000_05_140");
    MsgDisp("Hiiragi","See you again.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(I'm so happy that ｛柊＊＊＊｝
said something like that to me......
Alright, let's work hard!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
