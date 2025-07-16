BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P730600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600000_06_010");
    MsgDisp("Himuro","I came to comfort you before battle.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P730600000_06_020");
    MsgDisp("Himuro","Even though you're in the handicrafts
club, you'll have to do thing like model?");
    MsgDisp("主人公","Yeah, I'll wear the clothes I made myself.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600000_06_030");
    MsgDisp("Himuro","Maybe...
Can't you just display the clothes?");
    MsgDisp("主人公","You'll understand the clothes' charm more
if someone is wearing it after all.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600000_06_040");
    MsgDisp("Himuro","Ah, I see.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600000_06_050");
    MsgDisp("Himuro","Finally.
Then, do your best to not fall over.");
    MsgDisp("主人公","Thanks.");
    MsgDisp("主人公","(My heart is pounding, but I have to give
it my all...!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,1,0,0,#1,#1,0,0);
    VoicePlay("P730600000_06_060");
    MsgDisp("Himuro","Congratulations on your modelling debut.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Hey, don't put pressure on me...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P730600000_06_070");
    MsgDisp("Himuro","Isn't enough to just walk unashamedly?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("P730600000_06_080");
    MsgDisp("Himuro","...It looks good on you.");
    MsgDisp("主人公","Eh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("P730600000_06_090");
    MsgDisp("Himuro","Those clothes were pretty well-made.
Why don't you try to walk proudly amongst
everyone?");
    MsgDisp("主人公","Hehe, that's right.
Thank you.");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,0);
    VoicePlay("P730600000_06_100");
    MsgDisp("Himuro","It was nothing?
I was just stating the truth.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,0);
    VoicePlay("P730600000_06_110");
    MsgDisp("Himuro","Then, please watch your step.
I'll be watching.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Seems like after talking to
｛氷室＊＊｝, my stress has been
relieved. ...Alright, let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
