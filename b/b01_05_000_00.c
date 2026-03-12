BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm late!
｛Hiiragi＊＊＊｝ is...
Ah, he's already here!)");
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
MsgClose();
ChOpen(5,253,0,0,2,#1,#1,0,0);
MsgDisp("主人公","I'm sorry, I kept you waiting!");
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChMotion(5,1);
    VoicePlay("B010500000_05_000");
    MsgDisp("Hiiragi","If you're going to be late, let me know ahead
of time.
Communication is important.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Yes, I'll be more careful...");
    MsgDispSksp(0);
    break ;
    case 3:
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B010500000_05_010");
    MsgDisp("Hiiragi","That's quite the panicked rush you're in.");
    MsgDisp("主人公","Urgh...
I'm sorry.");
    MsgDispSksp(1,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B010500000_05_020");
    MsgDisp("Hiiragi","I can see your remorse, so that's enough.
Well, let's be off.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("B010500000_05_030");
    MsgDisp("Hiiragi","...Thank goodness.
It doesn't seem like anything happened to
you.");
    MsgDisp("主人公","Urgh, I'm sorry...");
    ChMouth(5,3);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B010500000_05_040");
    MsgDisp("Hiiragi","You are the only person who manages to make
me anxious like this.");
    MsgDisp("主人公","Huh?");
    MsgDispSksp(1,0);
    ChMotion(5,0);
    VoicePlay("B010500000_05_050");
    MsgDisp("Hiiragi","In any case, let's be off.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
