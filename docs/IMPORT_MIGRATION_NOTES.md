# Import Migration Notes for ROS 2 Migration

## armpi_fpv_kinematics Package Changes

The `armpi_fpv_kinematics` package has been migrated to ROS 2 with the Python package renamed from `armpi_fpv_kinematics` to `kinematics_pkg` to avoid naming conflicts.

### Import Changes Required

When migrating the following packages to ROS 2, update these imports:

#### warehouse
- **File**: `src/warehouse/scripts/out.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import set_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import set_pose_target`

- **File**: `src/warehouse/scripts/exchange.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import set_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import set_pose_target`

- **File**: `src/warehouse/scripts/in.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import set_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import set_pose_target`

#### object_sorting
- **File**: `src/object_sorting/scripts/sorting.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import set_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import set_pose_target`

#### face_detect
- **File**: `src/face_detect/scripts/face.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import go_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import go_pose_target`

#### object_pallezting
- **File**: `src/object_pallezting/scripts/pallezting.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import set_pose_target, go_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import set_pose_target, go_pose_target`

#### object_tracking
- **File**: `src/object_tracking/scripts/tracking.py`
- **Change**: `from armpi_fpv_kinematics.kinematics_control import set_pose_target, go_pose_target`
- **To**: `from kinematics_pkg.kinematics_control import set_pose_target, go_pose_target`

### Migration Process

1. Migrate the package to ROS 2 (package.xml, CMakeLists.txt, rospy→rclpy)
2. Update the import statements as listed above
3. Test the package functionality
4. Move to next package

### Notes

- The `kinematics_pkg` package is now properly installed in ROS 2
- All functions (`set_pose_target`, `go_pose_target`) remain the same
- Only the import path has changed 