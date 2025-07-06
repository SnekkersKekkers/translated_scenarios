BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P530600002_06_000");
    MsgDisp("Himuro","You're calm huh?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600002_06_010");
    MsgDisp("Himuro","You're so dignified,
and seem so composed.
Have you grown?");
    MsgDisp("主人公","Hehe, maybe.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("P530600002_06_020");
    MsgDisp("Himuro","Then, I guess I'll listen to the 
culmination of your hard work
to my heart's content.");
    MsgDisp("主人公","I'll leave it to you1");
    MsgDisp("主人公","(This is my last concert... Alright! Let's
have fun with all my heartー∈)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("P530600002_06_030");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P530600002_06_040");
    MsgDisp("Himuro","...What.");
    MsgDisp("主人公","Eh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600002_06_050");
    MsgDisp("Himuro","That's a nice expression. I came here
wanting to soothe your nerves, but it
doesn't look like I'll have to.");
    MsgDisp("主人公","That's not true.
I'm happy you came to support me.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600002_06_060");
    MsgDisp("Himuro","Ah, right.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P530600002_06_070");
    MsgDisp("Himuro","This is the last time I'll listen
to your performance.");
    MsgDisp("主人公","I need to let you hear the culmination
of my hard work, huh?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("P530600002_06_080");
    MsgDisp("Himuro","I'm looking forward to it.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting.
I'm off now.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    VoicePlay("P530600002_06_090");
    VoiceEVSPlay(6);
    MsgDisp("Himuro","Ah——
｛主人公｝.");
    MsgDisp("主人公","Yeah?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600002_06_100");
    MsgDisp("Himuro","...No, have fun.
I'll see yu later.");
    MsgDisp("主人公","Thank you!");
    MsgDisp("主人公","(The last concert...
Okay, let's have as much fun as we can!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
