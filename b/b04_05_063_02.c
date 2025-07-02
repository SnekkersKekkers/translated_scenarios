BGOpen("wf620",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040506302_05_000");
MsgDisp("Hiiragi","The color appears completely 
different to the sumemr sea.");
MsgSel("As I thought, the summer sea is better.","It's nice that it has many different appearances huh?","I might like the winter sea better.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMotion(5,4);
        ChEyeOpenLevel(5,9);
        VoicePlay("B040506302_05_010");
        MsgDisp("Hiiragi","As you thought huh...
So you're a summer sea person.
It's different to me.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        VoicePlay("B040506302_05_020");
        MsgDisp("Hiiragi","Yeah,
you suit the summer sea.");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040506302_05_030");
        MsgDisp("Hiiragi","As for me. I feel like the winter sea
suits me better.");
        MsgDisp("主人公","Maybe.
｛柊＊＊＊｝ suits the tense,
crisp winter sea huh?");
        ChEye(5,4);
        ChMotion(5,2);
        VoicePlay("B040506302_05_040");
        MsgDisp("Hiiragi","Thank you. Thank you. But that would make
it sound like you, who suits the summer
sea, are surrounded by a relaxed
atmosphere.");
        ChEyeOpenLevel(5,0);
        VoicePlay("B040506302_05_050");
        MsgDisp("Hiiragi","The air that surrounds you is calmer and
warmer. Once you touch it you can't let
go—");
        ChEye(5,4);
        ChMotion(5,0);
        ChEyeOpenLevel(5,-1);
        VoicePlay("B040506302_05_060");
        MsgDisp("Hiiragi","...To the point I lose control of myself
talking, that is your charm.");
        MsgDisp("主人公","(My charm... To hear ｛柊＊＊＊｝ say that
makes me happy...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040506302_05_070");
    MsgDisp("Hiiragi","That's right. It's still fresh no matter
how many times I come here.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040506302_05_080");
    MsgDisp("Hiiragi","Is that so?
For some reason I get excited
every time our opinions match up.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
