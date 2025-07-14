BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Let's see, the tables waiting for their
orders are......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400000_04_000");
    MsgDisp("Nanatsumori","Waitress.");
    MsgDisp("主人公","Yes! Ah, ｛七ツ森＊｝.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400000_04_010");
    MsgDisp("Nanatsumori","Shouldn't you clean up
that seat soon?");
    MsgDisp("主人公","Oh no!
That guest left a while ago......
Thanks for telling me.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400000_04_020");
    MsgDisp("Nanatsumori","It might be hard since there's so much to
do, but the store can't seat new customers
with dirty tables. Careful.");
    MsgDisp("主人公","(I see, I need to look around more.
Or else the store's reputation will take a
hit, too......)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Let's see, the tables waiting for their
orders are......");
    VoicePlay("I360400000_04_030");
    MsgDisp("Nanatsumori?","............");
    MsgDisp("主人公","(I've felt this gaze for a while
now......)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400000_04_040");
    MsgDisp("Nanatsumori","Hey.");
    MsgDisp("主人公","Ah, yes.
Would you like to order?");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400000_04_050");
    MsgDisp("Nanatsumori","Wrong.
It's wet over there, so be careful.");
    MsgDisp("主人公","Ah, you're right!
Thanks for telling me.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I360400000_04_060");
    MsgDisp("Nanatsumori",". I was on the edge of my seat, seeing if
someone would go \"thud\".");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("I360400000_04_070");
    MsgDisp("Nanatsumori","Especially you, you know?");
    MsgDisp("主人公","Ugh......");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400000_04_080");
    MsgDisp("Nanatsumori","Well, I'm glad no one fell.
Let's pay attention to our surroundings,
okay?");
    MsgDisp("主人公","(That's right.
I need to be more careful about my
surroundings......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
