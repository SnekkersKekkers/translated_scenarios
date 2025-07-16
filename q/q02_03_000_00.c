BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("Q020300000_03_000");
    MsgDisp("Honda","｛主人公｝.
Good morning!
Did you sleep well?");
    MsgDisp("主人公","Good morning.
Mhm, yes I did.
｛本多＊＊｝, how about you?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("Q020300000_03_010");
    MsgDisp("Honda","Me too.
As the well-slept duo, let's go together
for today's free period!");
    MsgSel("Sure, I'm coming！","Sorry, it's just......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3,1);
        VoicePlay("Q020300000_03_020");
        MsgDisp("Honda","Yay!
Let's make the most out of today!");
        MsgDisp("主人公","Thanks for inviting me.");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,4,1);
        VoicePlay("Q020300000_03_030");
        MsgDisp("Honda","No problem, now what should we do?
There are so many places I want to go to.");
        MsgDisp("主人公","(Hehe.
I can't wait for the free period together
with ｛本多＊＊｝! )");
        break ;
        case 1:
        ChEye(3,2);
        ChMouth(3,4);
        ChMotion(3,5,1);
        VoicePlay("Q020300000_03_040");
        MsgDisp("Honda","Dang, you already have plans, huh?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1,1);
        VoicePlay("Q020300000_03_050");
        MsgDisp("Honda","Welp, that can't be helped.
Let's both enjoy the free period!");
        MsgDisp("主人公","(He even invited me, I feel bad......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,5,3,3,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("Q020300000_03_060");
    MsgDisp("Honda","｛主人公｝.
Found you!
I was looking for you!");
    MsgDisp("主人公","｛本多＊＊｝, good morning!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("Q020300000_03_070");
    MsgDisp("Honda","Morning! How about we walk around together
for the free period? I've already
perfected a simulation on the best routes
to take and all, so what do you think?");
    MsgSel("Sure, I'm coming！","Sorry, it's just......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3,1);
        VoicePlay("Q020300000_03_080");
        MsgDisp("Honda","Woohoo! Alright, now we just need to
consider the places you want to see too so
I can update the overall layout and we can
walk around smoothly.");
        MsgDisp("主人公","As expected of ｛本多＊＊｝.
I'm looking forward to this!");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1,1);
        VoicePlay("Q020300000_03_090");
        MsgDisp("Honda","I'm also super excited!");
        MsgDisp("主人公","(Spending this freetime with
｛本多＊＊｝ will surely be a
blast! Maybe he can teach me fun facts and
trivia of the spots we'll be touring?)");
        break ;
        case 1:
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4,1);
        VoicePlay("Q020300000_03_100");
        MsgDisp("Honda","Oh... is that so?
I was assuming it would be the two of us
going around together");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,0,1);
        VoicePlay("Q020300000_03_110");
        MsgDisp("Honda","It can't be helped, I'll follow Plan B
instead.
So, have fun on your end too.");
        MsgDisp("主人公","(He even invited me, I feel bad......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3);
