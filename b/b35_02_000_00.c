BGDateAfterOpen();
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("B350200000_02_000");
MsgDisp("Sassa?","｛主人公｝.");
MsgDisp("主人公","｛颯砂＊＊｝?
What's up?");
MsgClose();
ChOpen(2,255,4,0,0,#1,#1,0,0);
VoicePlay("B350200000_02_010");
MsgDisp("Sassa","I wanted to ask you that.
What's wrong?");
MsgDisp("主人公","Hmm, for some reason I just wanted to ask.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B350200000_02_020");
MsgDisp("Sassa","Then, I also just wanted to ask for some
reason.");
MsgDisp("主人公","Hehe!");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
ChCheek(2,10);
VoicePlay("B350200000_02_030");
MsgDisp("Sassa","Umm, for some reason, there's a place I
want to go with you after this.
How about it?");
MsgSel("Yeah, sounds good!","There's something I have to do today.");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    ChCheek(2,0);
    VoicePlay("B350200000_02_040");
    MsgDisp("Sassa","Then it's settled!
Right, let's go!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B350200000_02_050");
    MsgDisp("Sassa","I don't know why, but for some reason I've
set my mind to a place.");
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChCheek(2,0);
    VoicePlay("B350200000_02_060");
    MsgDisp("Sassa","I see, can't be helped.
I'll give up.");
    MsgDisp("主人公","Sorry.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B350200000_02_070");
    MsgDisp("Sassa","I just invited you for some reason.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B350200000_02_080");
    MsgDisp("Sassa","Then, I'll see you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ looked disappointed.
I made him feel bad...)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
