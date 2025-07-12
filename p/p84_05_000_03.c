ScrFadeIn(0);
VoicePlay("P840500003_48_000");
MsgDisp("School Girl","Um... excuse me.
I haven't received any cardboard yet?");
MsgDisp("主人公","Eh∋
Even though I only refilled it just now...");
VoicePlay("P840500003_48_010");
MsgDisp("School Girl","Someone wrote in the admin 
notebook that they took thirty boxes...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,4,0,0,#1,#1,0,0);
VoicePlay("P840500003_05_000");
MsgDisp("Hiiragi","...It really is true.
I'll go to this class 
and ask them to return it.");
VoicePlay("P840500003_48_020");
MsgDisp("School Girl","Then, 
I'll go with you to take some.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(5);
MsgDisp("主人公","(Haa... I should have put more 
thought into the management method.
A huge fail...)");
MsgClose();
ScrFadeOut(0,0);
