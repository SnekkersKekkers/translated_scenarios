MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040412102_04_000");
MsgDisp("Nanatsumori","Is there anything 
you want to look at?");
MsgSel("Whatever ｛七ツ森＊｝ wants to see","Maybe some daily necessities","I'm kind of interested in some second hand clothes");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(2);
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040412102_04_010");
        MsgDisp("Nanatsumori","Me? I'll just be looking for vintage stuff
though.");
        MsgDispSksp(1,0);
        MsgDateResultDisp();
        MsgDispSksp(0);
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040412102_04_020");
        MsgDisp("Nanatsumori","This is enough for me.
I want you to enjoy this event too.");
        MsgDisp("主人公","I am enjoying it. Both the shops and the
customers are so lively. I'm super
excited!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040412102_04_030");
        MsgDisp("Nanatsumori","That's the best way to enjoy it.");
        MsgDisp("主人公","Hehe!");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040412102_04_040");
        MsgDisp("Nanatsumori","Ah... that reminds me. Do you remember the
store selling silver accessories we saw
while passing by earlier?");
        MsgDisp("主人公","Silver accessories?
Ah, the shop with queue and a cool
salesperson?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040412102_04_050");
        MsgDisp("Nanatsumori","Right.
...Huh? Didn't you notice?");
        MsgDisp("主人公","Notice?");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040412102_04_060");
        MsgDisp("Nanatsumori","Well... that's fine. That person's silver
accessories has a warmth to them.");
        ChEye(4,4);
        ChMouth(4,4);
        VoicePlay("B040412102_04_070");
        MsgDisp("Nanatsumori","It feels like they put their feelings into
each one of them.");
        MsgDisp("主人公","Hmm.
It's strange isn't it?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040412102_04_080");
        MsgDisp("Nanatsumori","Rumor has it that the rings they make will
bring happiness to each couple that wears
them.");
        MsgDisp("主人公","Waa, how wonderful...!");
        ChEye(4,4);
        ChMouth(4,4);
        VoicePlay("B040412102_04_090");
        MsgDisp("Nanatsumori","I'll buy them next time...");
        MsgDisp("主人公","A pair of rings?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040412102_04_100");
        MsgDisp("Nanatsumori","Right.");
        ChEye(4,5);
        ChMouth(4,4);
        MsgDisp("主人公","Can we not go see them now?");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("B040412102_04_110");
        MsgDisp("Nanatsumori","I'll pass.
It probably sold out ages ago, and they've
probably closed shop for the day.");
        MsgDisp("主人公","I see.
There were a lot of customers after all.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040412102_04_120");
        MsgDisp("Nanatsumori","That's true too.
But, I also haven't prepared my heart just
yet.");
        MsgDisp("主人公","(?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040412102_04_130");
    MsgDisp("Nanatsumori","Eh... Is that something worth going to the
trouble of looking for here?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040412102_04_140");
    MsgDisp("Nanatsumori","Nice, I'll help too.
I'll go all out in looking for some ladies
vintage items that'll suit you!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
