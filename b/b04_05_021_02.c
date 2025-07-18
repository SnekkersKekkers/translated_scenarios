BGOpen("wf210",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040502102_05_000");
MsgDisp("Hiiragi","There really aren't many people here.
It looks like I can do some vocal
exercises");
MsgSel("I want to hear it.","This is the feeling of the springtime of life.","Teach me too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502102_05_010");
    MsgDisp("Hiiragi","Hmmm....Ahーーー. Basically you have to
breathe from your stomach.");
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
        ChMouth(5,4);
        ChMotion(5,1);
        VoicePlay("B040502102_05_020");
        MsgDisp("Hiiragi","That's...the kind of thing where you yell
'You idiot!' right?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040502102_05_030");
        MsgDisp("Hiiragi","That's the sort of thing usually said at
sunset on a beach, correct?");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040502102_05_040");
        MsgDisp("Hiiragi","It's neither sunset, nor are we at a
beach, but do you want to try it?");
        MsgDisp("主人公","Eh, are you really going to do it?");
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,4);
        VoicePlay("B040502102_05_050");
        MsgDisp("Hiiragi","It'll be you saying it.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040502102_05_060");
        MsgDisp("Hiiragi","Come on, no one's here.
Let's do it together.");
        MsgDisp("主人公","Ehhh!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.6);
        ChClose(5,0,30);
        SEWait();
        VoicePlay("B040502102_05_070");
        MsgDisp("Hiiragi","One, two?");
        MsgDisp("主人公","Uh, you idiot ocean!");
        VoicePlay("B040502102_05_080");
        MsgDisp("Hiiragi","I like youー!");
        MsgDisp("主人公","Ah...
EHh∋");
        SEPlay("EV_SE_544",0.01);
        MsgClose();
        ChOpen(5,255,2,2,4,#1,#1,10,0,0,30);
        VoicePlay("B040502102_05_090");
        MsgDisp("Hiiragi","Uh...
So that's how you went about it...");
        MsgDisp("主人公","(Ahhh, I got it wrong...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502102_05_100");
    MsgDisp("Hiiragi","Are you interested?
We're anticipating your visit at the
Habataki Theatre Troupe.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
