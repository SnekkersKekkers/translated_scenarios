BGMStop();
BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q080300001_03_000");
    MsgDisp("Honda","Thanks for inviting me today.
It was fun!");
    MsgDisp("主人公","Yeah, me too.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("Q080300001_03_010");
    MsgDisp("Honda","Really? Then, why not go round together
the day after tomorrow too?");
    MsgDisp("主人公","Yeah, great.");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q080300001_03_020");
    MsgDisp("Honda","Today was more than what I simulated. It
was much more fulfilling, thanks to you.
Thanks for inviting me!");
    MsgDisp("主人公","Yeah, I had fun too.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("Q080300001_03_030");
    MsgDisp("Honda","So, for the next free period, wanna come
together? With you, I'm sure we can
experience more than we can expected!");
    MsgDisp("主人公","Hehe, yeah!");
    break ;
    case 4:
    case 5:
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("Q080300001_03_040");
    MsgDisp("Honda","School trip is great!
Free time is great too∈");
    MsgDisp("主人公","Hehe, it was so fun!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("Q080300001_03_050");
    MsgDisp("Honda","Yeah yeah, it's because you invited me.
Thanks!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q080300001_03_060");
    MsgDisp("Honda","So, I'll start this time.
The next free period, wanna walk around
together again?");
    MsgDisp("主人公","Yeah!　Of course.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
