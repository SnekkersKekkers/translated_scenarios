BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608402_06_000");
MsgDisp("Himuro","It's peaceful.
You can really let your 
guard down.");
MsgSel("It's an nice Indian Summer.","Autumn sure is nice.","There's not enough excitement though.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("B040608402_06_010");
    MsgDisp("Himuro","Heh?
You used those words correctly.
There's a lot of people who misinterpret
what it means, I'm impressed.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608402_06_020");
    MsgDisp("Himuro","That's right, I agree.
It's neither hot or cold, it's 
peaceful and calming to the mind.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040608402_06_030");
        MsgDisp("Himuro","——Ah, right.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608402_06_040");
        MsgDisp("Himuro","So you wanted excitement.
That's teh first time I heard that.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,4);
        VoicePlay("B040608402_06_050");
        MsgDisp("Himuro","Then, shall I try 
somrething stimulating?");
        MsgDisp("主人公","Eh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608402_06_060");
        MsgDisp("Himuro","If you get that flustered, 
I'll have trouble responding.");
        MsgDisp("主人公","Ugh, sorry.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040608402_06_070");
        MsgDisp("Himuro","Then, close your eyes.");
        MsgDisp("主人公","Eh... yeah.");
        MsgClose();
        ScrFadeOut(0);
        MsgDisp("主人公","(I wonder what he's going to do?)");
        ChEye(6,0);
        ChMouth(6,3);
        VoicePlay("B040608402_06_080");
        MsgDisp("Himuro","...Fuuu!");
        MsgDisp("主人公","∋");
        ScrFadeIn(0);
        MsgDisp("主人公","｛氷室＊＊｝ ∋　My ear!");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,5);
        VoicePlay("B040608402_06_090");
        MsgDisp("Himuro","Haha!
That's the excitement you wanted 
right? an external stimulation!");
        MsgDisp("主人公","(How annoying...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
