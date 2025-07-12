BGOpen("wf610",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
VoicePlay("B040506202_05_000");
MsgDisp("Hiiragi","It's hard to believe it's bustling
outside. It's mysterious.");
MsgSel("We can talk calmly here.","It's like we're on a stage, ｛柊＊＊＊｝...","Ahー it's funny how our voices echo");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,0);
    ChMouth(5,3);
    VoicePlay("B040506202_05_010");
    MsgDisp("Hiiragi","Yes.
I'd warmly welcome this 
kind of sea swimming.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040506202_05_020");
    MsgDisp("Hiiragi","Yes, this stage is the best!
Is this okay for the outfit?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,1);
        VoicePlay("B040506202_05_030");
        MsgDisp("Hiiragi","The constant bustling
outside has returned.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040506202_05_040");
        MsgDisp("Hiiragi","……");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040506202_05_050");
        MsgDisp("Hiiragi","Your actions are unpredictable to me.");
        MsgDisp("主人公","Umm...
did I surprise you?");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040506202_05_060");
        MsgDisp("Hiiragi","Yes.
Well, I suppose it's not just 
limited to today though.");
        ChMotion(5,0);
        MsgClose();
        ChClose(5,0,30);
        MsgDisp("主人公","Uh...
——Hm?　｛柊＊＊＊｝?");
        VoicePlay("B040506202_05_070");
        MsgDisp("Hiiragi","Ahhーーー.");
        MsgDisp("主人公","Ehh∈");
        MsgClose();
        ChOpen(5,31,0,3,3,#1,#1,0,0,0,30);
        VoicePlay("B040506202_05_080");
        MsgDisp("Hiiragi","How about it, were you surprised?");
        MsgDisp("主人公","Yeah, as expected of an actor,
you have a nice voice!");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040506202_05_090");
        MsgDisp("Hiiragi","...T-Thank you.
That wasn't my intention though.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040506202_05_100");
        MsgDisp("Hiiragi","Your usual unpredictability is wonderful.");
        MsgDisp("主人公","(｛柊＊＊＊｝...
But, I have mixed feelings
about how you praised me...)");
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
