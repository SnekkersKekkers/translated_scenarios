BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303301_03_000");
MsgDisp("Honda","I heard there's a popularity poll for the
deep-sea corner.
Which creature do you like?");
MsgSel("The Giant Isopod.","Um, the pretty jellyfish.","Um, the sunfish.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3,1);
    VoicePlay("B040303301_03_010");
    MsgDisp("Honda","Yay, me too!
The mascot of the deep-sea corner,
Guso-kun!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040303301_03_020");
    MsgDisp("Honda","Is that so?
Then, let's go to the jellyfish tank
instead of the deep-sea corner.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040303301_03_030");
    MsgDisp("Honda","...Yeah, me too, me too∈ Diving from the
surface to a depth of 800 meters deep in
the sea; they're certainly admirable
deep-sea fish!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
