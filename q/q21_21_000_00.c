BGOpen("sc812",0);
ChLayout(1);
SEPlay("EV_SE_867",1,0.8);
ScrFadeIn(0);
MsgDisp("主人公","(......Hmm?
The boy's room looks lively......)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(21,30,7,0,0,-1,-1,0,0);
VoicePlay("Q212100000_21_000");
MsgDisp("Michiru","Hehe.
Are you curious? Mari.");
MsgDisp("主人公","Ah, ｛みちる＊｝.
It's kind of buzzing, isn't it?
I wonder what's happening.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("Q212100000_21_010");
MsgDisp("Michiru","I think it's the classic of school trips.
Do you want to take a look?");
MsgSel("Yeah, Let's go!","I think you shouldn't……");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("Q212100000_21_020");
    MsgDisp("Michiru","Haah...... I'm getting nervous too.
Let's go!");
    break ;
    case 1:
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,3);
    VoicePlay("Q212100000_21_030");
    MsgDisp("Michiru","Are you sure?
Then let's go back to our room before 
the teacher finds us.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(21);
    MsgDisp("主人公","(I should also go to my room......)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_867",1);
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
