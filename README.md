# Features

## 1. Time & Scheduling

### Clock & Timetable
- **UManicClockPluginBPLibrary**  
  Set or advance in-game time (`SetInGameClockTime`, `TickManicClockAndGet`).
- **FManicTime**  
  Defines day/hour/minute/second slots.
- **UManicTimetableNodeBPLibrary**  
  Finds the active timetable slot for a given time.
- **UManicServiceSetTimeKey** (BT Service)  
  Updates Blackboard keys with the current time or an active slot name.

### Day of the Week
- **UManicDayOfWeekBPLibrary**  
  Converts day numbers into weekday strings (e.g. 1 → “Monday”).

### Time Events
- **UManicTimeEventBPLibrary**  
  Detects if the current time has reached a target (daily or once-only triggers).

---

## 2. AI Behaviour Tasks

### Find & Move
- **UManicFindActorInRegion**  
  Searches a radius for an actor of a specific class, checking a boolean property (e.g. `bIsFree`).
- **UManicTaskFindSpotInArea**  
  Randomly picks a reachable point within a radius.
- **UManicTaskGoToLocation**  
  Finds a random spot and moves there, re-trying if it times out.
- **UManicTaskMoveToTarget**  
  Moves AI to a Blackboard actor or location, with obstacle checks.

### Obstacle Avoidance & Stuck Detection
- **UManicObsAvoidance**  
  Offsets the AI’s goal if blocked, detects if it’s stuck, and fails if movement is impossible.

### Actor Finding Variants
- **UManicTaskFindActor**  
  Finds the closest actor of a given class.
- **UManicTaskFindFreeActor**  
  Similar to above, but ensures no other AI is targeting that actor.

### Interaction
- **UManicInteract**  
  Executes a custom `PerformGenericAction` on the AI Controller and optionally waits.

---

## 3. Dynamic Needs System

- **UDynamicManicNeedsComponent**  
  - Tracks multiple “needs” (e.g. hunger), each ticking up or down at a chosen rate.  
  - Fires `OnAnyNeedThresholdCrossed` when a threshold is reached and `OnAllNeedsUpdated` every tick call.  
  - Add, remove, or adjust needs at runtime (e.g. `AddNeed`, `RemoveNeedAtIndex`).

---

## 4. AI Controller

- **AManicAiController**  
  - Holds a `ControllerTimetable` array (alternative to the service’s internal timetable).  
  - `ActivityMap` (string → soft object pointers).  
  - `SetActivityKeyOnBlackboard`: Loads an actor from the map and sets it in a Blackboard key.  
  - `PerformGenericAction`: A Blueprint event for AI-specific actions.
