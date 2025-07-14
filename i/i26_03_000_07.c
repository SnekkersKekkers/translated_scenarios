BGOpen("ar600",0);
MsgClose();
ChOpen(3,35,0,0,0,#1,#1,0,0);
BGMPlay("BGM_C03_HONDA_A");
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_750");
    MsgDisp("Honda","Hey hey.
I can't find the magazines that were
brought in earlier.");
    MsgDisp("主人公","Ah, today's magazines are
already out.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_760");
    MsgDisp("Honda","Already? So all we need to do is take out
the new books. I'll do that.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_770");
    MsgDisp("Honda","......You know, I feel like my work
routine has been getting faster lately.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_780");
    MsgDisp("Honda","I think it's because of you.");
    MsgDisp("主人公","Hm, me?
I didn't do anything special, right?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_790");
    MsgDisp("Honda","If you're not doing anything special, it
just means that you're working well on the
daily tasks.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_800");
    MsgDisp("Honda","If you ever quit this job, I'm sure the
manager would be in trouble.");
    MsgDisp("主人公","(I'm happy to hear him say that!)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_810");
    MsgDisp("Honda","Sorry!
To have you come in early.");
    MsgDisp("主人公","It's fine, what's up?
The manager was running around, too......");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("I260300000_03_820");
    MsgDisp("Honda","One of our veteran part-timers suddenly
couldn't come in.");
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_830");
    MsgDisp("Honda","Just when the rest of us are new
part-timers. It's tough without just one
more person who understands the work.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_840");
    MsgDisp("Honda","So I called you in.
Sorry it was sudden.");
    MsgDisp("主人公","No, it's fine.
I'll go get changed quickly!");
    MsgClose();
    ScrFadeOut(0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ScrFadeIn(0);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("I260300000_03_850");
    MsgDisp("Honda","Da-...... We somehow got through the peak
hours......");
    MsgDisp("主人公","Good work.
It's the first time I've seen you this
tired, ｛本多＊＊｝.");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_860");
    MsgDisp("Honda","It was just that much of a disaster.
......But, you seem just fine?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_870");
    MsgDisp("Honda","But, the manager said this too.
You really helped out today.
We really can rely on you.");
    MsgDisp("主人公","(It feels good to be relied on......
I did it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
