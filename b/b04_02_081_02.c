BGOpen("fp210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040208102_02_000");
MsgDisp("Sassa","It suddenly blooms, then suddenly fade.
It's a bit too short huh?");
MsgSel("That's the beauty of their fall!","They'll bloom again next year though?","Let's take lots of pictures");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208102_02_010");
    MsgDisp("Sassa","Hahaha, beauty huh?
I learned a lot from that.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208102_02_020");
        MsgDisp("Sassa","Well, that's true I guess.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040208102_02_030");
        MsgDisp("Sassa","That's right.
It's a once a year contest.
It's the same as my interhigh.");
        MsgDisp("主人公","In preparation for a certain time, you've
also been giving it your all for one year,
right? That kind of thing?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4,1);
        VoicePlay("B040208102_02_040");
        MsgDisp("Sassa","Yeah. But the cherry blossoms will
continue every year, I go to the interhigh
a limited amount of times.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040208102_02_050");
        MsgDisp("Sassa","I have to make it bloom splendidly.");
        MsgDisp("主人公","Yeah, If it's ｛颯砂＊＊｝, it'll be
alright.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040208102_02_060");
        MsgDisp("Sassa","When you say it, I strangely feel like
it'll go well.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040208102_02_070");
        MsgDisp("Sassa","Alright, I too will bloom suddenly, then
fade suddenly!");
        MsgDisp("主人公","Hehe, ｛颯砂＊＊｝ doesn't have to fade
though?");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040208102_02_080");
        MsgDisp("Sassa","...Your smile is blooming all year round,
huh?");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        ChCheek(2,10);
        VoicePlay("B040208102_02_090");
        MsgDisp("Sassa","Eh? No, what am I saying? Forget it, I'm
sorry!");
        MsgDisp("主人公","(｛颯砂＊＊｝......)");
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
    ChMotion(2,0);
    VoicePlay("B040208102_02_100");
    MsgDisp("Sassa","I think it's best to burn it into your
memory, don't you think?");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
