BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040503302_05_000");
MsgDisp("Hiiragi","It's dark, so watch your step.");
MsgSel("Thank you very much!","The floor looks like it's glowing faintly","I've come here many times, so I'll be fine?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040503302_05_010");
    MsgDisp("Hiiragi","Yes, then lend me your hand?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,2);
    VoicePlay("B040503302_05_020");
    MsgDisp("Hiiragi","It really is...
It's been carefully thought out.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMotion(5,2);
        VoicePlay("B040503302_05_030");
        MsgDisp("Hiiragi","That's true.
What am I saying at this point?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        VoicePlay("B040503302_05_040");
        MsgDisp("Hiiragi","That's true.
Then, let me be clearer.");
        ChMotion(5,4);
        VoicePlay("B040503302_05_050");
        MsgDisp("Hiiragi","Let's hold hands.");
        MsgDisp("主人公","Eh...y-yeah.");
        ChClose(5,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(5,255,0,4,4,#1,#1,0,0);
        VoicePlay("B040503302_05_060");
        MsgDisp("Hiiragi","Phew...
I should have said that from the first
place.");
        ChMotion(5,2);
        VoicePlay("B040503302_05_070");
        MsgDisp("Hiiragi","I wonder why that is.
When I'm in front of of you, I'm so
indirect.");
        MsgDisp("主人公","That's not true.
I'm sorry for misunderstanding so often.");
        ChMotion(5,4);
        VoicePlay("B040503302_05_080");
        MsgDisp("Hiiragi","I'll be more straightforward in conveying
it to you. At any rate, I can't conceal my
affections towards you.");
        ChEye(5,2);
        VoicePlay("B040503302_05_090");
        MsgDisp("Hiiragi","Nevertheless, I am an actor.
Please let me act a little cool in front
of you.");
        MsgDisp("主人公","｛柊＊＊＊｝...");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040503302_05_100");
        MsgDisp("Hiiragi","Then, shall we keep holding hands like
this whilst walking around?");
        MsgDisp("主人公","(Affections towards me...
I might've unintentionally heard something
huge.)");
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
