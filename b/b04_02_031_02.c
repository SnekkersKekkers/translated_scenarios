BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040203102_02_000");
MsgDisp("Sassa","If they're in the same tank as the sharks,
won't they get eaten?");
MsgSel("Sawsharks look strong","That's just the way nature works","The small fish can't relax, I guess");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040203102_02_010");
    MsgDisp("Sassa","That's it, those teeth! What's with that∋
They just have to swing around and
effortlessly hurt all those little fish.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        VoicePlay("B040203102_02_020");
        MsgDisp("Sassa","Well, I guess that's true......
But wouldn't a different reaction be
better?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040203102_02_030");
        MsgDisp("Sassa","Sounds kind of like you.
That's not a bad thing, though.");
        MsgDisp("主人公","I wasn't being serious.");
        ChEye(2,4);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040203102_02_040");
        MsgDisp("Sassa","The strong one always wins.
Land or sea makes no difference.
That's what winning truly means.");
        MsgDisp("主人公","｛颯砂＊＊｝?");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,1);
        VoicePlay("B040203102_02_050");
        MsgDisp("Sassa","Because I'm blessed with this body, I need
to use it efficiently to my advantage and
win.");
        MsgDisp("主人公","(｛颯砂＊＊｝ always has competition on his
mind......)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040203102_02_060");
    MsgDisp("Sassa","That's true.
It feels unsafe if scary things are always
wandering around.");
    MsgDisp("主人公","(Hmm, more or less, I guess.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
