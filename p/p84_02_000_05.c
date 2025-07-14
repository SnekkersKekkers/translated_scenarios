MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Uhm...... We're all in this together, so
it'll work out somehow......");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,0,0,4,#1,#1,0,0);
VoicePlay("P840200005_02_000");
MsgDisp("Sassa","Right. How about we all collaborate? Us,
the matcha shop, and the yakisoba stand?");
VoicePlay("P840200005_48_000");
MsgDisp("School Girl A","A collab?
Sounds interesting.");
VoicePlay("P840200005_46_000");
MsgDisp("School Girl B","Do you think buying both would be worth
it?
Okay, let's try working together.");
MsgDisp("主人公","Phew...... ｛颯砂＊＊｝, thanks for saving
me.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P840200005_02_010");
MsgDisp("Sassa","Nah, I just said that on a whim.
I'm glad I could help.");
MsgDisp("主人公","(Even though I was a member of the student
council for three years, ｛颯砂＊＊｝ had
to save me. Ugh...I made a big mess of
things.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
