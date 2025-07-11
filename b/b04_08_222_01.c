BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040822201_08_000");
MsgDisp("Shirahane","Looking at all these things, 
I can't help but think that it must have
been inconvenient back then...");
MsgSel("There was no gas or electricity back then","It's too convenient nowadays","But, I think people's hearts were richer because of that.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,2,1);
    ChCheek(8,3);
    VoicePlay("B040822201_08_010");
    MsgDisp("Shirahane","That's not even the worst part.
There were no phones, so I couldn't
go on a date with you like this.
That would be troublin', right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("B040822201_08_020");
    MsgDisp("Shirahane","That's right. 
But it's because of that convenience
that we can live comfortably like 
this, right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("B040822201_08_030");
    MsgDisp("Shirahane","Does that mean we're 
narrow-minded in the modern era?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
