BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(It's already time to start... Haa, I hope
I haven't forgotten my lines.");
    VoicePlay("P230100000_01_000");
    MsgDisp("Kazama?","Cinderella?");
    MsgDisp("主人公","Ah, yes!");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,38,0,0,3,10,#1,0,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("P230100000_01_010");
    MsgDisp("Kazama","You've gotten completely in character.");
    MsgDisp("主人公","Hey, don't tease me.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("P230100000_01_020");
    MsgDisp("Kazama","My bad.
Ah, that's right.
I'll say thank you in advance.");
    MsgDisp("主人公","Eh?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("P230100000_01_030");
    MsgDisp("Kazama","Practicing during the preparation period
was fun. Even if the real performance is a
complete disaster, it'll have been more
than worth it.");
    MsgDisp("主人公","Hehe, yeah.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("P230100000_47_000");
    MsgDisp("Broadcast","We will now begin Habataki High School's
play.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P230100000_01_040");
    MsgDisp("Kazama","So, we already enjoyed ourselves enough.
After that, all that's left to do is
give our best for everyone.");

    MsgDisp("主人公","Yes, that's right!");
    SEPlay("EV_SE_038");
    SEWait();
    MsgClose();
    ScrFadeOut(0,0);
    ChEyeOpenLevel(1,#1);
    ChMouthOpenLevel(1,#1);
    ChCheek(1,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
