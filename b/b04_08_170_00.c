BGOpen("ne340",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040817000_08_000");
MsgDisp("Shirahane","Umm...
What should we start with?");
MsgSel("I want to hear ｛大地＊＊｝'s beautiful voice.","Let's sing a duet together!","Please listen to my song.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("B040817000_08_010");
    MsgDisp("Shirahane","Eh?
You can go first.
I'm still preparing my heart.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    ChCheek(8,3);
    VoicePlay("B040817000_08_020");
    MsgDisp("Shirahane","It's kinda embarrassing but...
I'll make sure not ta drag you down. ");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040817000_08_030");
    MsgDisp("Shirahane","Don't just stop at one song, sing as many
as you want▼");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
