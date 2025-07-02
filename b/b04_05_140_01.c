BGOpen("ne210",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040514001_05_000");
MsgDisp("Hiiragi","There were all sorts of rock bands.
Today there was a song that 
I could listen to calmly.");
MsgSel("I'm glad you found something you like","Shall we buy a CD to go home?","I wanted to get a little more excited.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040514001_05_010");
    MsgDisp("Hiiragi","Thanks to that, my world has expanded.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040514001_05_020");
    MsgDisp("Hiiragi","Yes, let's cheer them on.
This disc will help support them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040514001_05_030");
    MsgDisp("Hiiragi","Is that all...?
It looked like you were jumping up
and down contentedly.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
