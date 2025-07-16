BGMPlay("BGM_PLACE_SHOP",0.01);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040401001_04_000");
MsgDisp("Nanatsumori","Ohhhー... how's this?
Doesn't it like it was especially designed
for you?");
MsgSel("Really, I'll go but it!","I wonder...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,5,1);
    VoicePlay("B040401001_04_010");
    MsgDisp("Nanatsumori","Seriously∋
Well, if you like it, I won't stop you.
I feel a sense of responsibility...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040401001_04_020");
    MsgDisp("Nanatsumori","It's just a joke.
Don't worry about it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040401001_04_030");
    MsgDisp("Nanatsumori","If it suits you, apologize to me.
This is an amazing design.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
