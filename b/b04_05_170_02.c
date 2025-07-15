BGOpen("ne340",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040517002_05_000");
MsgDisp("Hiiragi","The food menu also seems to be popular?
What do you want to eat?");
MsgSel("HAbataki mixed juice of course!","Couple-exclusive lovey-dovey menu?","Seems like the natto fried rice is highly recommended");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040517002_05_010");
    MsgDisp("Hiiragi","Let's start with that.
I love it too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMotion(5,2);
        VoicePlay("B040517002_05_020");
        MsgDisp("Hiiragi","Hmー, I wonder what we'll be made to do...
It's a bit worrying.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,3);
        ChMouth(5,2);
        VoicePlay("B040517002_05_030");
        MsgDisp("Hiiragi","L-Lovey dovey?");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040517002_05_040");
        MsgDisp("Hiiragi","Yes, I don't mind.
That means we...
are this \"lovey-dovey couple\", yes?");
        MsgDisp("主人公","Lovey-dovey couple?");
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040517002_05_050");
        MsgDisp("Hiiragi","Yes, I have no objections.");
        MsgDisp("主人公","Umm ｛柊＊＊＊｝, it's a \"Lovey Dovey Menu
for Couples Only\"?");
        ChEye(5,3);
        ChMouth(5,0);
        ChMotion(5,5);
        ChCheek(5,10);
        VoicePlay("B040517002_05_060");
        MsgDisp("Hiiragi","Ugh...");
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,4);
        VoicePlay("B040517002_05_070");
        MsgDisp("Hiiragi","Even if it's only for lovey-dovey couples,
I don't mind at all.");
        MsgDisp("主人公","(Hehe, ｛柊＊＊＊｝ has a surprisingly
stubborn side...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("B040517002_05_080");
    MsgDisp("Hiiragi","I wonder why it's mixed in...
the natto.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
