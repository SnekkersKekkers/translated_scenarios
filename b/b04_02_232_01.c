BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223201_02_000");
MsgDisp("Sassa","It would be good if ferris
wheels spun a little faster.");
MsgSel("That's just a thrill ride then","Ferris wheels are supposed to be slow-spinning","That seems a bit interesting");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040223201_02_010");
    MsgDisp("Sassa","What kind of speed are you imagining for a
thrill ride?!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040223201_02_020");
    MsgDisp("Sassa","If you put it that way, 
the conversation is over, right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040223201_02_030");
    MsgDisp("Sassa","Right. Maybe the axis of rotation could
change gradually? There are all sorts of
possibilities to consider");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
