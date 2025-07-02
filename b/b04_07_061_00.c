BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040706100_07_000");
MsgDisp("Mikage","Even though it's a class field trip, 
we're going for a dip in the sea.
Come on, let's go.");
MsgSel("｛御影＊＊｝, come with us too","What are we supposed to learn here?","How about we cool off at the beach hut?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040706100_07_010");
    MsgDisp("Mikage","The chaperones have to
keep watch here.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040706100_07_020");
    MsgDisp("Mikage","Ohhh, there she is, Majime-chan.
She's alive and well even in summer.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040706100_07_030");
    MsgDisp("Mikage","Let's go, let's go. We have to watch
out for heat stroke too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
