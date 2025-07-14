BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303100_03_000");
MsgDisp("Honda","Look at this huge water tank!
It's spectacular, isn't it?");
MsgSel("What type of fish is that?","The patterns on the tropical fish are stunning ▼","Wow∋ Something's watching us behind the rocks.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040303100_03_010");
    MsgDisp("Honda","It's a hippocampus! A seahorse! Just as
you said! That little guy is a splendid
fish too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040303100_03_020");
    MsgDisp("Honda","Yeah, the colour vision fish possess is
way more vibrant than a human's! The world
they see far surpasses our imagination.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040303100_03_030");
    MsgDisp("Honda","From behind the rocks? Maybe it's a type
of rockfish? Black rockfish, fat
greenling, red-spotted grouper, longtooth
grouper... There are many high-quality
fish.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
