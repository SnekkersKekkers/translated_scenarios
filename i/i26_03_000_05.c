BGOpen("ar600",0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","-Yes. Those author's books can be found on
the shelf over there.");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,0,0,4,#1,#1,0,0);
    VoicePlay("I260300000_03_510");
    MsgDisp("Honda","......Splendid.");
    MsgDisp("主人公","Huh?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_520");
    MsgDisp("Honda","When you first started working, you had no
idea which shelf carried what......");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_530");
    MsgDisp("Honda","Before you knew it, you became able to
help people immediately!");
    MsgDisp("主人公","Now that you mention it,
I guess I did?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_540");
    MsgDisp("Honda","You're a veteran shopkeeper now.
I can watch you with confidence.");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("I260300000_03_550");
    MsgDisp("Honda","-Wait, now's not the time for me to be
watching you work!");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_560");
    MsgDisp("Honda","If I'm not careful,
you'll surpass me.");
    MsgDisp("主人公","(Hehe! I still have a long way to go......
But I'm happy ｛本多＊＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,4,0,4,#1,#1,0,0);
    VoicePlay("I260300000_03_570");
    MsgDisp("Honda","......Hm?
Isn't the store sparkling?");
    MsgDisp("主人公","Huh?");
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_580");
    MsgDisp("Honda","The books are perfectly aligned, and the
titles are all perfect.
Even the heights are in line......");
    MsgDisp("主人公","Yeah, I noticed it so I fixed it.
But, I'm surprised you noticed,
｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,8);
    VoicePlay("I260300000_03_590");
    MsgDisp("Honda","I have worked here longer than you, you
know?");
    MsgDisp("主人公","Ah...... hehe, you're right.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_600");
    MsgDisp("Honda","The big tasks are important, too, but
little things like that will be recognized
later, too.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_610");
    MsgDisp("Honda","Of course, for the shop's reputation, but
for yours, too.");
    MsgDisp("主人公","Hm, for me too?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_620");
    MsgDisp("Honda","Yeah yeah.
Well, the manager and I are already
relying on you, though.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_630");
    MsgDisp("Honda","You and Habataki Books will both be loved
more and more!
Now, let's do our best today!");
    MsgDisp("主人公","(Hehe, I'm glad!
Looks like I helped everyone out.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
