BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("I460600005_40_000");
    MsgDisp("Male Customer","…………");
    MsgDisp("主人公","Are you looking for
a specific flower?");
    VoicePlay("I460600005_40_010");
    MsgDisp("Male Customer","Umm......");
    MsgDisp("主人公","If it's for a gift,
the mini bouquets and arrangements
are popular.");
    VoicePlay("I460600005_40_020");
    MsgDisp("Male Customer","I, see......");
    MsgDisp("主人公","There are also male clerks if
you'd like me to call one over?");
    VoicePlay("I460600005_40_030");
    MsgDisp("Male Customer","Ah...... yes, please.");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,35,0,0,4,-1,-1,0,0);
    VoicePlay("I460600005_06_000");
    MsgDisp("Himuro","All done.");
    MsgDisp("主人公","Thanks.
For helping me out with that customer.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("I460600005_06_010");
    MsgDisp("Himuro","You're pretty tactful.
He said he gets nervous around women.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("I460600005_06_020");
    MsgDisp("Himuro","An excellent response.");
    MsgDisp("主人公","(I did it!
｛氷室＊＊｝ praised me)");
    break ;
    case 4:
    case 5:
    VoicePlay("I460600005_47_000");
    MsgDisp("Woman Customer","Could I purchase
that dried flower?");
    MsgDisp("主人公","Yes!");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,35,3,0,4,-1,-1,0,0);
    VoicePlay("I460600005_06_030");
    MsgDisp("Himuro","The dried flowers you made are
being received pretty well.");
    MsgDisp("主人公","I was thinking that even flowers
that have lost their vigor can still
be enjoyed.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600005_06_040");
    MsgDisp("Himuro","Hm.
You really are swee-");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("I460600005_06_050");
    MsgDisp("Himuro","......Shrewd.");
    MsgDisp("主人公","Huh∋");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600005_06_060");
    MsgDisp("Himuro","Well, this talent for business
will surely come in handy later, right?");
    MsgDisp("主人公","(Um...... I guess
he's complimenting me?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
