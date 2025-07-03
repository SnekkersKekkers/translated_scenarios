BGMStop();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Just a little more and it begins...
What should we do... I'm nervous.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoicePlay("P530500000_05_000");
    MsgDisp("Hiiragi","If you're that tense, 
you won't be able to play the sound 
that represents you.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝...
but I'm anxious.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500000_05_010");
    MsgDisp("Hiiragi","That can't be helped, correct?
If that's the case, 
you should get more nervous.");
    MsgDisp("主人公","Ehh∋");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500000_05_020");
    MsgDisp("Hiiragi","Heheh, that's much like everybody back at
theatre troupe. The more stressed they
feel, conversely the more they calm down.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500000_05_030");
    MsgDisp("Hiiragi","Look, 
your facial expression is softening.");
    MsgDisp("主人公","Y-yeah.
Maybe?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500000_05_040");
    MsgDisp("Hiiragi","Right?
Just like that, relax your shoulders, 
and have a good time.");
    MsgDisp("主人公","Y-yeah...!");
    MsgDisp("主人公","(At any rate, I just have to do it...!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Just a little more and it begins...
What should we do... I'm nervous.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P530500000_05_050");
    MsgDisp("Hiiragi","｛主人公｝.
How are you feeling?");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝...");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("P530500000_05_060");
    MsgDisp("Hiiragi","What kind of expression is that?");
    MsgDisp("主人公","An anxious one.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("P530500000_05_070");
    MsgDisp("Hiiragi","Haha, it'll be alright.
As long as you can reply calmly.");
    MsgDisp("主人公","Eh?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500000_05_080");
    MsgDisp("Hiiragi","See,
you're back to your usual self.");
    MsgDisp("主人公","Y-yeah.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500000_05_090");
    MsgDisp("Hiiragi","I'm a fan of the soft, 
sustained sound you always play.
I'd be happy to hear it.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Thank you!
I'll play my usual sound.");
    MsgDisp("主人公","(Alright, let's do it!
I need to satisfy ｛柊＊＊＊｝!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
