BGOpen("ho000",0);
ChLayout(1);
ChEye(3,0);
ChEye(3,0);
ChMotion(3,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(3,3);
    ChEye(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("S120300003_03_000");
    MsgDisp("Honda","No problem!
Walking home was fun too!");
    MsgDisp("主人公","Hehe, you're grinning while you talk.
Maybe you're a bit tired?");
    ChEye(3,0);
    ChEye(3,0);
    ChMotion(3,0,1);
    VoicePlay("S120300003_03_010");
    MsgDisp("Honda","Really?
I can still keep going——");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("S120300003_03_020");
    MsgDisp("Honda","Not! Sorry! Why would I force you to keep
going?");
    MsgDisp("主人公","Hehe!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S120300003_03_030");
    MsgDisp("Honda","Why don't you go inside already? Let's
talk more at school. Cya!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(I'm happy I was able to visit the shrine
with ｛本多＊＊｝.
This year will be another good year.)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("S120300003_03_040");
    MsgDisp("Honda","Ah, we're here.");
    MsgDisp("主人公","Yeah. Thank you. But as for your
wish......");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S120300003_03_050");
    MsgDisp("Honda","Oh, that.
I was praying for everyone's happiness, in
order.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("S120300003_03_060");
    MsgDisp("Honda","Of course, I'm happy that you were number
one on my list.");
    MsgDisp("主人公","Hehe, really?
Thank you.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("S120300003_03_070");
    MsgDisp("Honda","It's nothing.
I'd say there about 50 on the list.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("S120300003_03_080");
    MsgDisp("Honda","But I spoke so quickly in the second half,
maybe the gods missed you?");
    MsgDisp("主人公","Isn't that fine?
They're gods after all.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300003_03_090");
    MsgDisp("Honda","Haha, you're right! Then I won't worry.
Byebye!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(Thank you for praying for me
......｛本多＊＊｝.
This year will be another good year.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
