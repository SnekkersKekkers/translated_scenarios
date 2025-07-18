BGOpen("ne210",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040414000_04_000");
MsgDisp("Nanatsumori","Crap...
Today's number was hot!");
MsgSel("Haa, that was awesome!","I think it was so-so...","It was so loud, my ears are ringing...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040414000_04_010");
    MsgDisp("Nanatsumori","Right!
I still haven't cooled down...
It was awesome!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,0,1);
    VoicePlay("B040414000_04_020");
    MsgDisp("Nanatsumori","...So-so?
What do you mean by \"so-so\"?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040414000_04_030");
    MsgDisp("Nanatsumori","Haha, me too. I guess it's because we're
listening to it live. I can't get enough
of this reverberationー...!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
