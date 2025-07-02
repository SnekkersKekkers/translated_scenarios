BGOpen("wf510",0);
BGMStop();
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040505102_05_000");
MsgDisp("Hiiragi","The stories of the constellations 
are rather interesting.");
MsgSel("How about incorporating it in your performance.","I can't help but feel a bit sleepy?","It's a love story huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040505102_05_010");
    MsgDisp("Hiiragi","Indeed, 
that's a nice idea.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        VoicePlay("B040505102_05_020");
        MsgDisp("Hiiragi","You cannot go sleep deprived.
Let's return home earlier today.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,0);
        ChMotion(5,0);
        VoicePlay("B040505102_05_030");
        MsgDisp("Hiiragi","Are you lacking in sleep?");
        MsgDisp("主人公","That's not it but...
I'm sorry.");
        ChEye(5,4);
        ChMouth(5,4);
        VoicePlay("B040505102_05_040");
        MsgDisp("Hiiragi","There's no need to apologize.
Not only was I able to see the 
beautiful stars, but also your
comfortable sleeping face,");
        MsgDisp("主人公","Ehh∈
｛柊＊＊＊｝, you saw?");
        ChMotion(5,4);
        VoicePlay("B040505102_05_050");
        MsgDisp("Hiiragi","Yes, I saw.");
        MsgDisp("主人公","Hey...
You should have woke me.");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040505102_05_060");
        MsgDisp("Hiiragi","Why is that?
Even though you were that comfortable?");
        MsgDisp("主人公","You should have because
it's embarassing.");
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,2);
        ChCheek(5,5);
        VoicePlay("B040505102_05_070");
        MsgDisp("Hiiragi","E-embarassing?
Umm... I apologize.");
        VoicePlay("B040505102_05_080");
        MsgDisp("Hiiragi","I didn't intend on causing
you that much embarassment.");
        MsgDisp("主人公","I'm the one who should be saying sorry.
I was the one who fell asleep...");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        ChCheek(5,0);
        VoicePlay("B040505102_05_090");
        MsgDisp("Hiiragi","Hehe, we didn't even say our impressions
on the planetarium.");
        MsgDisp("主人公","Hehe, speaking of, that's strange isn't
it?");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040505102_05_100");
        MsgDisp("Hiiragi","Yes. Talking about being sleepy, being
woken up... What were we even saying?");
        MsgDisp("主人公","Seriously.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040505102_05_110");
        MsgDisp("Hiiragi","But, today I found another
way to enjoy the planetarium.
Let's come again, okay?");
        MsgDisp("主人公","(Another way to enjoy the planetarium...
Next time, I definitely won't fall
asleep!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040505102_05_120");
    MsgDisp("Hiiragi","That's right.
Since ancient times, \"love\" has 
been a theme for humans.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
