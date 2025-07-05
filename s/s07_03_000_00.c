BGOpen("ex020",0);
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S070300000_03_000");
    MsgDisp("Honda","It's packed.
Exactly how a New Year's shrine visit 
should be.");
    MsgDisp("主人公","Yeah.
Everyone looks like they're having fun.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("S070300000_03_010");
    MsgDisp("Honda","I am too!");
    break ;
    case 3:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("S070300000_03_020");
    MsgDisp("Honda","Woah, it's crowded.
I wonder what everyone's wishing for.");
    MsgDisp("主人公","What about ｛本多＊＊｝?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("S070300000_03_030");
    MsgDisp("Honda","Right. That you, me, and my family are in
good health. Hm, and also for my animals.");
    MsgDisp("主人公","Hehe, that's a lot of things to wish for.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S070300000_03_040");
    MsgDisp("Honda","Hm, yeah.
If I take too long the next in line will
have to wait. I'll just combine it and
say \"Everyone's Health\" instead.");
    MsgDisp("主人公","Hehe!");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S070300000_03_050");
    MsgDisp("Honda","This is exactly what I expected from a
New Year's visit!
It's not exciting if it's not crowded.");
    MsgDisp("主人公","Hehe, yeah.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S070300000_03_060");
    MsgDisp("Honda","Since we've got some time before we can 
pray, I'll try to think of something 
to wish for.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("S070300000_03_070");
    MsgDisp("Honda","The number one would be your health.
Next is for me, my family, 
fish and insects......");
    MsgDisp("主人公","You'll make the next person in line wait.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,5,1);
    VoicePlay("S070300000_03_080");
    MsgDisp("Honda","Ah, you're right.
Okay, I'll combine it all and wish 
for the health of my favorite things.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S070300000_03_090");
    MsgDisp("Honda","How's that?");
    MsgDisp("主人公","｛本多＊＊｝ loves so many things.
That'll make it hard for the Gods, huh?");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("S070300000_03_100");
    MsgDisp("Honda","That's not good.
Then I'll make a priority system.");
    ChEye(3,0);
    ChMouth(3,4);
    VoicePlay("S070300000_03_110");
    MsgDisp("Honda","First is you.
Next is me, my family......");
    MsgDisp("主人公","(I'm the first?
That makes me so happy......
｛本多＊＊｝, thank you.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
